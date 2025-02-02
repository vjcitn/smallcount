% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/read_sparse_csv.R
\name{read_sparse_csv}
\alias{read_sparse_csv}
\title{Read a sparse delimited file in a dgCMatrix}
\usage{
read_sparse_csv(file, sep = ",")
}
\arguments{
\item{file}{character(1) path to a gzipped delimited file with counts; features are rows, cells are columns}

\item{sep}{character(1) delimiter for fields (defaults to ',')}
}
\description{
Read a sparse delimited file in a dgCMatrix
}
\note{
The functions are prototypes. They need to be ported to C++
The functions reads in sparse delimited file.
There is one version for the case in which genes are in the rows,
and one for the transpose case, when they are in the columns.
The transpose case simpler and faster.
For both cases we assume the first rows are the colums names and the first column are the rownames
}
\examples{
## Original object
data("tenx_subset")
new <- read_sparse_csv(system.file("extdata/tenx_subset.csv.gz", package = "smallcount"))
identical(new, tenx_subset)
new <- read_sparse_csv_transpose(system.file("extdata/tenx_subset-transpose.csv.gz", package = "smallcount"))
identical(new, tenx_subset)
}

#pragma once

#include "lsn.hpp"

#include <pqxx/pqxx> // IWYU pragma: export

#include <string>

std::string get_db_version(pqxx::work &txn);

void catchup_to_lsn(pqxx::work &txn, std::string const &replication_slot,
                    lsn_type lsn);

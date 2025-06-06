#pragma once

#include <slang/ast/symbols/ValueSymbol.h>
#include <slang/ast/symbols/VariableSymbols.h>

#include "lyra/common/symbol.hpp"
#include "lyra/common/type.hpp"

namespace lyra::common {

struct Variable {
  SymbolRef symbol{};
  Type type;

  static auto FromSlang(const slang::ast::ValueSymbol* symbol) -> Variable {
    return {
        .symbol = symbol,
        .type = Type::FromSlang(symbol->getType()),
    };
  }
};

}  // namespace lyra::common

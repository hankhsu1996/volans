#pragma once

#include <memory>

namespace slang::ast {
class Expression;
}

namespace lyra::mir {
class Expression;
}

namespace lyra::lowering::ast_to_mir {

// Lowers a slang AST Expression into a MIR Expression.
auto LowerExpression(const slang::ast::Expression& expression)
    -> std::unique_ptr<mir::Expression>;

}  // namespace lyra::lowering::ast_to_mir

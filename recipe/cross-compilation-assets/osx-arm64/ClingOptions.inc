/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Option Parsing Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/////////
// Prefixes

#ifdef PREFIX
#define COMMA ,
PREFIX(prefix_0, {llvm::StringLiteral("")})
PREFIX(prefix_3, {llvm::StringLiteral("-") COMMA llvm::StringLiteral("")})
PREFIX(prefix_2, {llvm::StringLiteral("-") COMMA llvm::StringLiteral("--") COMMA llvm::StringLiteral("")})
PREFIX(prefix_1, {llvm::StringLiteral("--") COMMA llvm::StringLiteral("")})
#undef COMMA
#endif // PREFIX

/////////
// Prefix Union

#ifdef PREFIX_UNION
#define COMMA ,
PREFIX_UNION({
llvm::StringLiteral("-") COMMA llvm::StringLiteral("--") COMMA llvm::StringLiteral("")})
#undef COMMA
#endif // PREFIX_UNION

/////////
// ValuesCode

#ifdef OPTTABLE_VALUES_CODE
#endif
/////////
// Groups

#ifdef OPTION

//////////
// Options

OPTION(prefix_0, llvm::StringLiteral("<input>"), INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, llvm::StringLiteral("<unknown>"), UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("debug-only="), _debugFlags_EQ, Joined, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("debug-only"), _debugFlags, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("errorout"), _errorout, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not recover from input errors", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("help"), help, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print this help text", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("L"), L, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Add directory to library search path", "<directory>", nullptr)
OPTION(prefix_3, llvm::StringLiteral("l"), l, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Load a library before prompt", "<library>", nullptr)
OPTION(prefix_1, llvm::StringLiteral("metastr="), _metastr_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Set the meta command tag, default '.'", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("metastr"), _metastr, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Set the meta command tag, default '.'", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("nologo"), _nologo, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not show startup-banner", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("noruntime"), noruntime, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Disable runtime support (no null checking, no value printing)", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("ptrcheck"), _ptrcheck, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Enable injection of pointer validity checks", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("version"), version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print the compiler version", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("v"), v, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Enable verbose output", nullptr, nullptr)
#endif // OPTION

#ifdef SIMPLE_ENUM_VALUE_TABLE

struct SimpleEnumValue {
  const char *Name;
  unsigned Value;
};

struct SimpleEnumValueTable {
  const SimpleEnumValue *Table;
  unsigned Size;
};
static const SimpleEnumValueTable SimpleEnumValueTables[] = {};
static const unsigned SimpleEnumValueTablesSize = std::size(SimpleEnumValueTables);
#endif // SIMPLE_ENUM_VALUE_TABLE



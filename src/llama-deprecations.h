#pragma once

#if defined(__GNUC__) || defined(__clang__)
#    define LLAMA_IGNORE_DEPRECATED_BEGIN _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wdeprecated-declarations\"")
#    define LLAMA_IGNORE_DEPRECATED_END   _Pragma("GCC diagnostic pop")
#elif defined(_MSC_VER)
#    define LLAMA_IGNORE_DEPRECATED_BEGIN __pragma(warning(push)) __pragma(warning(disable: 4996))
#    define LLAMA_IGNORE_DEPRECATED_END   __pragma(warning(pop))
#else
#    define LLAMA_IGNORE_DEPRECATED_BEGIN
#    define LLAMA_IGNORE_DEPRECATED_END
#endif

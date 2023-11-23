#include "ParserFactory.h"

ParserFactory::ParserFactory(string type, shared_ptr<Parser> parser)
{
    _prototype = { type, parser };
} //đăng kí parser

shared_ptr<Parser> ParserFactory::select(string type)
{
    shared_ptr<Parser> parser = nullptr;

    if (type == get<0>(_prototype))
    {
        parser = get<1>(_prototype);
    }
    
    return parser;
}
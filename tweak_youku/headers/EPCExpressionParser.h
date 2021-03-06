//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface EPCExpressionParser : NSObject
{
    struct {
        char *str;
        unsigned long long len;
        int pos;
        char *error;
        void *user_data;
        CDUnknownFunctionPointerType variable_cb;
        CDUnknownFunctionPointerType function_cb;
    } pd;
    char c_exp[2048];
    NSDictionary *_variables;
    id <EPCExpressionParserDelegate> _delegate;
}

@property(nonatomic) __weak id <EPCExpressionParserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
- (void).cxx_destruct;
- (double)evaluateError:(id *)arg1;
- (id)initWithExpression:(id)arg1;

@end


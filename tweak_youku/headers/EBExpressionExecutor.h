//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EBExpressionExecutor : NSObject
{
}

+ (double)unpackSingleRet:(id)arg1;
+ (void)makeContentOffset:(id)arg1 model:(id *)arg2;
+ (void)makeScale:(id)arg1 model:(id *)arg2;
+ (void)makeTranslate:(id)arg1 model:(id *)arg2;
+ (id)viewPropertyMap;
+ (void)change:(id *)arg1 property:(id)arg2 config:(id)arg3 to:(id)arg4;
+ (_Bool)shouldExit:(id)arg1 exitExpression:(id)arg2;
+ (_Bool)executeExpression:(id)arg1 exitExpression:(id)arg2 scope:(id)arg3;

@end


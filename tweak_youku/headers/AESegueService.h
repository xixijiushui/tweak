//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AESegueService : NSObject
{
    CDUnknownBlockType _analyzeBlock;
}

+ (id)seguefromController:(id)arg1 toController:(id)arg2 segueType:(int)arg3;
+ (id)makeSegueWithModel:(id)arg1 fromController:(id)arg2 segueType:(int)arg3;
+ (id)makeSegueWithModel:(id)arg1 fromController:(id)arg2;
+ (id)service;
+ (void)collectCustomerEventWithSegueModel:(id)arg1;
+ (void)handleYoukuRouteURL:(id)arg1;
+ (id)makeASKSegueWithModel:(id)arg1 fromController:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType analyzeBlock; // @synthesize analyzeBlock=_analyzeBlock;
- (void).cxx_destruct;
- (id)destinationViewControllerWithSegueModel:(id)arg1;

@end

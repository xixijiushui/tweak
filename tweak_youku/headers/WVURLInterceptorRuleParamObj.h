//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WVURLInterceptorRuleParamObj : NSObject
{
    int _indexInParamArray;
    NSString *_nameInRequest;
    NSString *_standardName;
}

@property(copy, nonatomic) NSString *standardName; // @synthesize standardName=_standardName;
@property(copy, nonatomic) NSString *nameInRequest; // @synthesize nameInRequest=_nameInRequest;
@property(nonatomic) int indexInParamArray; // @synthesize indexInParamArray=_indexInParamArray;
- (void).cxx_destruct;

@end


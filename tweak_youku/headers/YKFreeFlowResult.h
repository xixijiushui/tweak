//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface YKFreeFlowResult : NSObject <NSCoding>
{
    _Bool _isProxy;
    _Bool _isStandardIcon;
    _Bool _isFreeFlow;
    NSString *_carrier;
    NSString *_productId;
    NSString *_productName;
    unsigned long long _status;
    long long _effectiveDate;
    long long _expireDate;
    unsigned long long _restData;
    NSString *_iconName;
    NSString *_openId;
}

@property(copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(nonatomic) _Bool isFreeFlow; // @synthesize isFreeFlow=_isFreeFlow;
@property(nonatomic) unsigned long long restData; // @synthesize restData=_restData;
@property(nonatomic) long long expireDate; // @synthesize expireDate=_expireDate;
@property(nonatomic) long long effectiveDate; // @synthesize effectiveDate=_effectiveDate;
@property(nonatomic) _Bool isStandardIcon; // @synthesize isStandardIcon=_isStandardIcon;
@property(nonatomic) _Bool isProxy; // @synthesize isProxy=_isProxy;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
- (void).cxx_destruct;
- (id)freeFlowResultDic;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSubscriptionResult:(id)arg1;

@end


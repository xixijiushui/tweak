//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MSAuthConfig : NSObject
{
    int _type;
    NSString *_lang;
    NSString *_appkey2;
    NSString *_asfkey2;
    NSString *_authcode2;
}

+ (id)param:(id)arg1;
+ (id)param;
+ (_Bool)isPre;
+ (id)shareInstance;
@property(copy, nonatomic) NSString *authcode2; // @synthesize authcode2=_authcode2;
@property(copy, nonatomic) NSString *asfkey2; // @synthesize asfkey2=_asfkey2;
@property(copy, nonatomic) NSString *appkey2; // @synthesize appkey2=_appkey2;
@property(copy, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setWithAuthcode:(id)arg1 appKey:(id)arg2;
- (id)init;
@property(readonly, nonatomic) NSString *asfkey;
@property(readonly, nonatomic) NSString *authcode;
@property(readonly, nonatomic) NSString *appkey;

@end

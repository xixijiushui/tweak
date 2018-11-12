//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface HYPartnerRelationList : NSObject
{
    _Bool _showAuthPage;
    NSString *_nickName;
    NSString *_bindFAQUrl;
    NSString *_authFAQUrl;
    NSArray *_partnerRelationList;
    NSArray *_notBindPartnerRelationList;
    NSArray *_notAuthPartnerRelationList;
}

+ (id)buildFromJsonDict:(id)arg1;
@property(retain, nonatomic) NSArray *notAuthPartnerRelationList; // @synthesize notAuthPartnerRelationList=_notAuthPartnerRelationList;
@property(retain, nonatomic) NSArray *notBindPartnerRelationList; // @synthesize notBindPartnerRelationList=_notBindPartnerRelationList;
@property(retain, nonatomic) NSArray *partnerRelationList; // @synthesize partnerRelationList=_partnerRelationList;
@property(nonatomic) _Bool showAuthPage; // @synthesize showAuthPage=_showAuthPage;
@property(retain, nonatomic) NSString *authFAQUrl; // @synthesize authFAQUrl=_authFAQUrl;
@property(retain, nonatomic) NSString *bindFAQUrl; // @synthesize bindFAQUrl=_bindFAQUrl;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;
- (id)buildRelationListForm:(id)arg1;

@end

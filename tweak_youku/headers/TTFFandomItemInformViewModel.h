//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, TTPCommunityInformListService;

@interface TTFFandomItemInformViewModel : NSObject
{
    NSString *_completionTip;
    NSString *_pickerTitle;
    NSDictionary *_reasonInfo;
    long long _fandomID;
    long long _itemID;
    TTPCommunityInformListService *_informListService;
}

@property(retain, nonatomic) TTPCommunityInformListService *informListService; // @synthesize informListService=_informListService;
@property(nonatomic) long long itemID; // @synthesize itemID=_itemID;
@property(nonatomic) long long fandomID; // @synthesize fandomID=_fandomID;
@property(retain, nonatomic) NSDictionary *reasonInfo; // @synthesize reasonInfo=_reasonInfo;
@property(retain, nonatomic) NSString *pickerTitle; // @synthesize pickerTitle=_pickerTitle;
@property(retain, nonatomic) NSString *completionTip; // @synthesize completionTip=_completionTip;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *reasons;
- (void)informReplyWithReason:(id)arg1;
- (void)informPostWithReason:(id)arg1;
- (void)setupReasonInfo;
- (id)initWithFamdomID:(long long)arg1 withItemID:(long long)arg2;

@end


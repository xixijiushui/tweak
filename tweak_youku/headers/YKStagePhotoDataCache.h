//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSMutableString, NSString, YKFStagephotoShowInfoPO;

@interface YKStagePhotoDataCache : NSObject
{
    _Bool _fromOldCmsData;
    _Bool _halfScreen;
    _Bool _gotoAllStagePhoto;
    NSString *_fromPage;
    NSString *_showId;
    NSString *_browserShowId;
    NSString *_browserVid;
    long long _browserSetId;
    long long _browserTabId;
    NSString *_halfScreenTitle;
    YKFStagephotoShowInfoPO *_browseShowInfoModel;
    NSMutableDictionary *_likeDictionary;
    NSMutableString *_reportString;
    NSString *_shareText;
    NSArray *_bannerList;
    YKFStagephotoShowInfoPO *_showInfoModel;
    NSArray *_tabList;
    long long _allPhotoTabIndex;
}

@property(nonatomic) long long allPhotoTabIndex; // @synthesize allPhotoTabIndex=_allPhotoTabIndex;
@property(retain, nonatomic) NSArray *tabList; // @synthesize tabList=_tabList;
@property(retain, nonatomic) YKFStagephotoShowInfoPO *showInfoModel; // @synthesize showInfoModel=_showInfoModel;
@property(retain, nonatomic) NSArray *bannerList; // @synthesize bannerList=_bannerList;
@property(nonatomic) _Bool gotoAllStagePhoto; // @synthesize gotoAllStagePhoto=_gotoAllStagePhoto;
@property(retain, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property(retain, nonatomic) NSMutableString *reportString; // @synthesize reportString=_reportString;
@property(retain, nonatomic) NSMutableDictionary *likeDictionary; // @synthesize likeDictionary=_likeDictionary;
@property(nonatomic) _Bool halfScreen; // @synthesize halfScreen=_halfScreen;
@property(retain, nonatomic) YKFStagephotoShowInfoPO *browseShowInfoModel; // @synthesize browseShowInfoModel=_browseShowInfoModel;
@property(retain, nonatomic) NSString *halfScreenTitle; // @synthesize halfScreenTitle=_halfScreenTitle;
@property(nonatomic) long long browserTabId; // @synthesize browserTabId=_browserTabId;
@property(nonatomic) long long browserSetId; // @synthesize browserSetId=_browserSetId;
@property(retain, nonatomic) NSString *browserVid; // @synthesize browserVid=_browserVid;
@property(retain, nonatomic) NSString *browserShowId; // @synthesize browserShowId=_browserShowId;
@property(nonatomic) _Bool fromOldCmsData; // @synthesize fromOldCmsData=_fromOldCmsData;
@property(retain, nonatomic) NSString *showId; // @synthesize showId=_showId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fromPage; // @synthesize fromPage=_fromPage;
- (_Bool)containsObjectLikeObject:(id)arg1;
- (void)dealloc;

@end

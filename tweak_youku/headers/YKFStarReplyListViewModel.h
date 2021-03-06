//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseListViewModel.h"

@class NSString, YKFCommunityPostActivityServiceListPostActivitiesAPI, YKFStararrivalStarActivityServiceGetStarUserActivitiesAPI;

@interface YKFStarReplyListViewModel : ALMBaseListViewModel
{
    _Bool _hideLoadMoreButton;
    _Bool _isOnline;
    _Bool _hideLevelImage;
    _Bool _isStarReplyListViewModelLoaded;
    _Bool _onlyShowFirstpage;
    _Bool _showPart;
    _Bool _canDeleteReply;
    long long _starArrivalId;
    long long _gmtLastTime;
    long long _firstPageLastTime;
    unsigned long long _starReplyType;
    NSString *_spmC;
    YKFStararrivalStarActivityServiceGetStarUserActivitiesAPI *_getUserActivitiesAPI;
    YKFCommunityPostActivityServiceListPostActivitiesAPI *_listPostActivitiesAPI;
}

@property(retain, nonatomic) YKFCommunityPostActivityServiceListPostActivitiesAPI *listPostActivitiesAPI; // @synthesize listPostActivitiesAPI=_listPostActivitiesAPI;
@property(retain, nonatomic) YKFStararrivalStarActivityServiceGetStarUserActivitiesAPI *getUserActivitiesAPI; // @synthesize getUserActivitiesAPI=_getUserActivitiesAPI;
@property(nonatomic) _Bool canDeleteReply; // @synthesize canDeleteReply=_canDeleteReply;
@property(retain, nonatomic) NSString *spmC; // @synthesize spmC=_spmC;
@property(nonatomic) _Bool showPart; // @synthesize showPart=_showPart;
@property(nonatomic) _Bool onlyShowFirstpage; // @synthesize onlyShowFirstpage=_onlyShowFirstpage;
@property(nonatomic) _Bool isStarReplyListViewModelLoaded; // @synthesize isStarReplyListViewModelLoaded=_isStarReplyListViewModelLoaded;
@property(nonatomic) _Bool hideLevelImage; // @synthesize hideLevelImage=_hideLevelImage;
@property(nonatomic) unsigned long long starReplyType; // @synthesize starReplyType=_starReplyType;
@property(nonatomic) _Bool isOnline; // @synthesize isOnline=_isOnline;
@property(nonatomic) _Bool hideLoadMoreButton; // @synthesize hideLoadMoreButton=_hideLoadMoreButton;
@property(nonatomic) long long firstPageLastTime; // @synthesize firstPageLastTime=_firstPageLastTime;
@property(nonatomic) long long gmtLastTime; // @synthesize gmtLastTime=_gmtLastTime;
@property(nonatomic) long long starArrivalId; // @synthesize starArrivalId=_starArrivalId;
- (void).cxx_destruct;
- (unsigned long long)countOfViewModels;
- (_Bool)canLoadMore;
- (void)handlePostActivities:(id)arg1;
- (void)handleStarUserActivities:(id)arg1;
- (id)loadData;
- (id)init;

@end


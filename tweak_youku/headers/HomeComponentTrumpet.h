//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

#import "HomeTrumpetCellDelegate.h"
#import "LatestHistoryDelegate.h"

@class NSString, NSTimer;

@interface HomeComponentTrumpet : CMSComponent <HomeTrumpetCellDelegate, LatestHistoryDelegate>
{
    _Bool _isDelete;
    unsigned long long _type;
    NSTimer *_timer;
}

+ (id)makeVideoFromDict:(id)arg1;
+ (id)makeCardContextWithDict:(id)arg1;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)postVideosInfoWithVid:(id)arg1;
- (void)deleteButtonTappedWithCell:(id)arg1;
- (id)trumpetCardVideo;
- (void)timeFire:(id)arg1;
- (void)openURL:(id)arg1 parameters:(id)arg2;
- (void)gotoCacheList;
- (void)gotoDetail;
- (void)hide;
- (void)playHistory;
- (void)reload;
- (void)reloadComponent:(id)arg1;
- (id)iconImage;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 didSelectComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;
- (id)findUnplayCompletionCacheVideos;
- (void)postPromoteCancelOrOver;
- (void)showCache;
- (void)promoteLatestHistoryAndCache;
- (void)hideHistoryView;
- (void)showHistoryViewWithInfo:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

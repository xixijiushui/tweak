//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKSTFeedViewController.h"

@class NSDictionary, YKSTFeedPageItem;

@interface YKSTFeedForDetailViewController : YKSTFeedViewController
{
    _Bool _forceDisableAutoPlay;
    YKSTFeedPageItem *_feedPageItem;
    NSDictionary *_firstPageJson;
}

@property(retain, nonatomic) NSDictionary *firstPageJson; // @synthesize firstPageJson=_firstPageJson;
@property(retain, nonatomic) YKSTFeedPageItem *feedPageItem; // @synthesize feedPageItem=_feedPageItem;
@property(nonatomic) _Bool forceDisableAutoPlay; // @synthesize forceDisableAutoPlay=_forceDisableAutoPlay;
- (void).cxx_destruct;
- (void)notifyContainerScrolled:(id)arg1;
- (id)feedsMgr:(id)arg1 playNextFeedScenarioWithFeed:(id)arg2;
- (void)notifyForcePlayFirstFeedModel;
- (void)notificationClosePlayController;
- (void)notificationOpenPlayController;
- (void)notificationStartPlay;
- (void)notificationStopPlay;
- (void)feedsMgr:(id)arg1 didStopPlayFeed:(id)arg2;
- (void)feedsMgr:(id)arg1 didStartPlayFeed:(id)arg2;
- (void)processRequestSuccess:(id)arg1 pageItem:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)acceptZPDNotificationContainerMsg:(id)arg1;
- (void)setupContentInset;
- (void)loadView;
- (void)viewDidLoad;
- (void)addObservers;
- (void)parseFirstPageComponents:(id)arg1;
- (id)translateJson2MtopJson:(id)arg1;
- (id)initRequestParameters:(id)arg1 firstPageJson:(id)arg2;
- (id)initRequestParameters:(id)arg1;

@end


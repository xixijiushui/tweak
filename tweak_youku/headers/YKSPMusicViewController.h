//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DYKURLRouterViewControllerProtocol.h"
#import "UIScrollViewDelegate.h"
#import "YKPagesManagerDelegate.h"
#import "YKSPHotMusicControllerDelegate.h"
#import "YKSPMusicVideoControllerDelegate.h"

@class FSBaseTableView, NSString, UIButton, YKSMuseTabbarView, YKSPHotMusicController, YKSPMusicVideoController, YKSPagesManager;

@interface YKSPMusicViewController : UIViewController <YKPagesManagerDelegate, YKSPMusicVideoControllerDelegate, YKSPHotMusicControllerDelegate, UIScrollViewDelegate, DYKURLRouterViewControllerProtocol>
{
    _Bool _forbidChangeMusic;
    _Bool _canScroll;
    double _fillet;
    long long _type;
    CDUnknownBlockType _useMusic;
    NSString *_musicId;
    CDUnknownBlockType _uselocalVideo;
    UIViewController *_parentVC;
    NSString *_topicId;
    NSString *_topicName;
    NSString *_activityItemId;
    NSString *_view_type;
    YKSPagesManager *_pagesManager;
    YKSMuseTabbarView *_tabbarView;
    FSBaseTableView *_scrollView;
    YKSPHotMusicController *_hotPage;
    YKSPMusicVideoController *_videoSelect;
    UIButton *_cancelBtn;
    UIButton *_uploadBtn;
    UIButton *_titleBtn;
}

+ (void)addRoundedCorners:(unsigned long long)arg1 withRadii:(struct CGSize)arg2 view:(id)arg3;
@property(nonatomic) _Bool canScroll; // @synthesize canScroll=_canScroll;
@property(retain, nonatomic) UIButton *titleBtn; // @synthesize titleBtn=_titleBtn;
@property(retain, nonatomic) UIButton *uploadBtn; // @synthesize uploadBtn=_uploadBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) YKSPMusicVideoController *videoSelect; // @synthesize videoSelect=_videoSelect;
@property(retain, nonatomic) YKSPHotMusicController *hotPage; // @synthesize hotPage=_hotPage;
@property(retain, nonatomic) FSBaseTableView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) YKSMuseTabbarView *tabbarView; // @synthesize tabbarView=_tabbarView;
@property(retain, nonatomic) YKSPagesManager *pagesManager; // @synthesize pagesManager=_pagesManager;
@property(nonatomic) _Bool forbidChangeMusic; // @synthesize forbidChangeMusic=_forbidChangeMusic;
@property(copy, nonatomic) NSString *view_type; // @synthesize view_type=_view_type;
@property(copy, nonatomic) NSString *activityItemId; // @synthesize activityItemId=_activityItemId;
@property(copy, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(copy, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(copy, nonatomic) CDUnknownBlockType uselocalVideo; // @synthesize uselocalVideo=_uselocalVideo;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(copy, nonatomic) CDUnknownBlockType useMusic; // @synthesize useMusic=_useMusic;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double fillet; // @synthesize fillet=_fillet;
- (void).cxx_destruct;
- (void)uploadBtnAction:(id)arg1;
- (void)titleBtnAction:(id)arg1;
- (void)cancelBtnAction;
- (void)addCancelBtn;
- (id)leftRightBtnWith:(id)arg1;
- (void)addImage:(id)arg1 onBtn:(id)arg2;
- (void)startRecodeAction;
- (void)addHeaderZone;
- (void)useMusicFromOtherMusicListPage:(id)arg1;
- (void)useMusicFromHotMusicPage:(id)arg1;
- (void)jumpToRecordWithMusicId:(id)arg1;
- (void)useMusicWith:(id)arg1;
- (void)deleteMusic:(id)arg1;
- (void)useVideoFromVideoSeletPage:(id)arg1;
- (void)ykPagesManager:(id)arg1 exposureIndexs:(id)arg2;
- (id)ykPagesManager:(id)arg1 titleForPageAtIndex:(long long)arg2;
- (void)ykPagesManager:(id)arg1 reusePage:(id)arg2 atIndex:(long long)arg3;
- (id)ykPagesManager:(id)arg1 controllerForPageAtIndex:(long long)arg2;
- (id)ykPagesManager:(id)arg1 identifierForPageAtIndex:(long long)arg2;
- (long long)numberOfPagesInPagesManager:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)parserTabsData;
- (void)setupTabAndContent;
- (void)didReceiveMemoryWarning;
- (void)changeScrollStatus;
- (void)dismissSelfAfterVideoUploaded;
- (void)addNotification;
- (void)viewDidLoad;
- (float)barHeight;
- (id)init;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)currentViewControllerOpenType;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)clickEventWith:(id)arg1 spm:(id)arg2 extend:(id)arg3;
- (void)clickEventWith:(id)arg1 spm:(id)arg2;
- (void)pvEnd;
- (void)pvStart;
- (id)pageSPM;
- (id)pageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

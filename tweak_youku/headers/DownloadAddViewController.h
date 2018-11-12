//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBaseViewController.h"

@class NSString;

@interface DownloadAddViewController : UIBaseViewController
{
    _Bool _fromUserSystem;
    _Bool _hideDownloadedEntry;
    NSString *_sid;
    NSString *_firstVid;
    NSString *_lastVid;
    NSString *_spmAB;
    NSString *_spmPageName;
    id <DownloadAddViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool hideDownloadedEntry; // @synthesize hideDownloadedEntry=_hideDownloadedEntry;
@property(nonatomic) _Bool fromUserSystem; // @synthesize fromUserSystem=_fromUserSystem;
@property(nonatomic) __weak id <DownloadAddViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *spmPageName; // @synthesize spmPageName=_spmPageName;
@property(copy, nonatomic) NSString *spmAB; // @synthesize spmAB=_spmAB;
@property(copy, nonatomic) NSString *lastVid; // @synthesize lastVid=_lastVid;
@property(copy, nonatomic) NSString *firstVid; // @synthesize firstVid=_firstVid;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;

@end

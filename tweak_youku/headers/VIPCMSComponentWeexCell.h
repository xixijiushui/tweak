//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "CMSComponentCellProtocol.h"

@class NSDate, NSMutableDictionary, NSString, NSURL, UIView, VIPCMSComponentContext, WXSDKInstance;

@interface VIPCMSComponentWeexCell : UITableViewCell <CMSComponentCellProtocol>
{
    WXSDKInstance *_instance;
    NSMutableDictionary *_params;
    VIPCMSComponentContext *_componentContext;
    id _refreshDelegate;
    CDUnknownBlockType _renderFinish;
    UIView *_weexView;
    NSURL *_url;
    NSDate *_startDate;
}

@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(copy, nonatomic) CDUnknownBlockType renderFinish; // @synthesize renderFinish=_renderFinish;
@property(nonatomic) id refreshDelegate; // @synthesize refreshDelegate=_refreshDelegate;
@property(retain, nonatomic) VIPCMSComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) WXSDKInstance *instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (void)setupModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class ASVContext;

@interface ASVRootViewController : UIViewController
{
    ASVContext *_context;
}

@property(retain, nonatomic) ASVContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)commitClickEventWithPage:(id)arg1 ctrlName:(id)arg2 spm:(id)arg3 extend:(id)arg4;
- (id)dataForUserTrack;
- (void)setupInitData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithContext:(id)arg1;

@end


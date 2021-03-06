//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "UIActionSheetDelegate.h"

@class NSString, UIActionSheet;

@interface WVUIActionSheet : WVDynamicHandler <UIActionSheetDelegate>
{
    id _index;
    UIActionSheet *_actionSheet;
}

+ (unsigned long long)instanceScope;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) id index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)releaseActionSheet;
- (void)show:(id)arg1 withWVBridgeContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


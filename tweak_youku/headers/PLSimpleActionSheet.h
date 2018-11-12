//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKPlainActionSheetDelegate.h"

@class NSString, YKPlainActionSheet;

@interface PLSimpleActionSheet : NSObject <YKPlainActionSheetDelegate>
{
    id <PLSimpleActionSheetDelegate> _delegate;
    YKPlainActionSheet *_actionSheet;
    NSString *_clid;
}

@property(retain, nonatomic) NSString *clid; // @synthesize clid=_clid;
@property(retain, nonatomic) YKPlainActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) __weak id <PLSimpleActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideActionSheetIfShown;
- (void)actionSheet:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)showSimpleActionSheetForVideo:(id)arg1 inCollection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

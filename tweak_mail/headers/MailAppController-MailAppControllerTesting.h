//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MailAppController.h"

#import "MFAppPerformanceTesting.h"

@class NSString;

@interface MailAppController (MailAppControllerTesting) <MFAppPerformanceTesting>
- (void)installNotificationObserverForNotificationName:(id)arg1 forOneNotification:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)reportPPTTimings:(id)arg1;
- (void)startShowDismissComposeTest:(id)arg1;
- (void)_performNextShowDismissComposeTransitionForTest:(id)arg1;
- (void)dismissReply;
- (void)_reallyStartShowReplyTest:(id)arg1;
- (void)startShowDismissReplyTest:(id)arg1;
- (void)startMessageIterationTest:(id)arg1;
- (void)_messageContentLayerFinished;
- (void)startMessageDeleteTest:(id)arg1;
- (void)_reallyStartMessageDeleteTest:(id)arg1;
- (void)startMessageTransferTest:(id)arg1 multiSelect:(_Bool)arg2;
- (void)_reallyStartMessageTransferTest:(id)arg1 mailboxController:(id)arg2;
- (void)_didFinishExitEditModeTest:(id)arg1;
- (void)startExitEditModeTest:(id)arg1;
- (void)_reallyStartExitEditModeTest:(id)arg1;
- (void)_reallyStartRotationTest:(id)arg1;
- (void)startRotationTest:(id)arg1;
- (void)startDismissComposeTest:(id)arg1;
- (void)_prepareForDismissComposeTest:(id)arg1;
- (void)_reallyStartDismissComposeTest:(id)arg1;
- (void)_prepareForComposeView:(id)arg1;
- (void)startShowComposeTest:(id)arg1;
- (void)startPhotoPickerTest:(id)arg1;
- (void)_dismissPhotoPickerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showPhotoPickerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startPhotoPickerTest:(id)arg1;
- (void)tearDownPhotoPickerTest;
- (void)_prepareForShowComposeTest:(id)arg1;
- (void)_reallyStartShowComposeTest:(id)arg1;
- (void)startScrollMessageListTest:(id)arg1 withOptions:(id)arg2;
- (void)reallyStartScrollMessageListTest:(id)arg1;
- (void)startScrollMessagesInEditModeTest:(id)arg1;
- (void)startScrollMessagesInEditModeWithSelectionTest:(id)arg1;
- (void)_reallyStartScrollMessagesInEditModeWithSelectionTest:(id)arg1;
- (id)_prepareForScrollMailboxesTest:(id)arg1;
- (void)_performScrollTestOnMessageList:(id)arg1 withController:(id)arg2;
- (void)_showMessageListView:(_Bool)arg1;
- (id)_prepareForScrollMessagesTest:(id)arg1 inEditMode:(_Bool)arg2;
- (void)waitForUIToSettleDown;
- (void)switchToDesiredMailbox;
- (void)switchToInbox;
- (id)getMailboxWithName:(id)arg1;
- (id)getAccount;
- (id)getMailboxPickerController;
- (id)getMailboxListViewControllerMail;
- (id)getMailboxContentViewController;
- (id)getControllerOfType:(Class)arg1;
- (void)failedTest:(id)arg1;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (void)runAllTests;
- (_Bool)isTesting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


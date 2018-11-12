//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DetailHelperProtocol.h"

@class NSString, PlayVideoController;

@interface DetailHelper : NSObject <DetailHelperProtocol>
{
    id <DetailLoadingProtocol> _loading;
    id <DetailContentProtocol> _content;
    id <DetailDiscussionBarProtocol> _discussionBar;
    PlayVideoController *_playVideoController;
}

@property(readonly, nonatomic) __weak PlayVideoController *playVideoController; // @synthesize playVideoController=_playVideoController;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <DetailDiscussionBarProtocol> discussionBar;
@property(readonly, nonatomic) id <DetailContentProtocol> content;
@property(readonly, nonatomic) id <DetailLoadingProtocol> loading;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadPlayVideoController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


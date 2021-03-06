//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASCellNode.h"

#import "ASTextNodeDelegate.h"

@class ASImageNode, ASTextNode, DYKNetworkImageNode, NSString, YKFSaintseiyaHomePageDataDTO;

@interface YKSHomeFollowingCell : ASCellNode <ASTextNodeDelegate>
{
    DYKNetworkImageNode *_bgImgeNode;
    YKFSaintseiyaHomePageDataDTO *_model;
    ASTextNode *_videoTitle;
    DYKNetworkImageNode *_userAvatar;
    ASTextNode *_userName;
    ASTextNode *_timeDesc;
    ASImageNode *_bottomBgNode;
}

@property(retain, nonatomic) ASImageNode *bottomBgNode; // @synthesize bottomBgNode=_bottomBgNode;
@property(retain, nonatomic) ASTextNode *timeDesc; // @synthesize timeDesc=_timeDesc;
@property(retain, nonatomic) ASTextNode *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) DYKNetworkImageNode *userAvatar; // @synthesize userAvatar=_userAvatar;
@property(retain, nonatomic) ASTextNode *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(retain, nonatomic) YKFSaintseiyaHomePageDataDTO *model; // @synthesize model=_model;
@property(retain, nonatomic) DYKNetworkImageNode *bgImgeNode; // @synthesize bgImgeNode=_bgImgeNode;
- (void).cxx_destruct;
- (void)textNode:(id)arg1 tappedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4 textRange:(struct _NSRange)arg5;
- (id)layoutSpecThatFits:(CDStruct_42a63532)arg1;
- (void)reloadData:(id)arg1;
- (void)setupSubView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


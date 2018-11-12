//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASDisplayNode.h"

#import "ASNetworkImageNodeDelegate.h"

@class ASImageNode, ASNetworkImageNode, NSString, NSURL, UIImage;

@interface DYKNetworkImageNode : ASDisplayNode <ASNetworkImageNodeDelegate>
{
    NSURL *_URL;
    id <ASNetworkImageNodeDelegate> _delegate;
    unsigned long long _imageOptions;
    ASNetworkImageNode *_networkImageNode;
    ASImageNode *_imageNode;
}

@property(retain, nonatomic) ASImageNode *imageNode; // @synthesize imageNode=_imageNode;
@property(retain, nonatomic) ASNetworkImageNode *networkImageNode; // @synthesize networkImageNode=_networkImageNode;
@property(nonatomic) unsigned long long imageOptions; // @synthesize imageOptions=_imageOptions;
@property(nonatomic) __weak id <ASNetworkImageNodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imageNodeDidFinishDecoding:(id)arg1;
- (void)imageNode:(id)arg1 didFailWithError:(id)arg2;
- (void)imageNodeDidStartFetchingData:(id)arg1;
- (void)imageNode:(id)arg1 didLoadImage:(id)arg2;
- (void)setContentMode:(long long)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)layoutSpecThatFits:(CDStruct_42a63532)arg1;
@property(nonatomic) __weak UIImage *defaultImage;
@property(nonatomic) __weak NSURL *URL; // @synthesize URL=_URL;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

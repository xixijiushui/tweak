//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKFPostPublishVideoItem.h"

@class NSString;

@interface YKFPostPublishVideoItem : NSObject <YKFPostPublishVideoItem>
{
    NSString *_content;
    NSString *_videoPicUrl;
    long long _videoLength;
    double _width;
    double _height;
}

@property(nonatomic, getter=ykf_height) double height; // @synthesize height=_height;
@property(nonatomic, getter=ykf_width) double width; // @synthesize width=_width;
@property(nonatomic, getter=ykf_videoLength) long long videoLength; // @synthesize videoLength=_videoLength;
@property(copy, nonatomic, getter=ykf_videoPicUrl) NSString *videoPicUrl; // @synthesize videoPicUrl=_videoPicUrl;
@property(copy, nonatomic, getter=ykf_content) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

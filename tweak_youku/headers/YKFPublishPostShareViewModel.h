//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseModel.h"

@class NSString;

@interface YKFPublishPostShareViewModel : ALMBaseModel
{
    NSString *_vid;
    NSString *_coverurl;
    long long _duration;
    NSString *_imageurl;
    long long _imagetype;
    double _width;
    double _height;
    NSString *_title;
    NSString *_content;
    long long _sourceType;
    NSString *_tagIds;
}

@property(retain, nonatomic) NSString *tagIds; // @synthesize tagIds=_tagIds;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) long long imagetype; // @synthesize imagetype=_imagetype;
@property(copy, nonatomic) NSString *imageurl; // @synthesize imageurl=_imageurl;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *coverurl; // @synthesize coverurl=_coverurl;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;

@end


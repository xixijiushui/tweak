//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class NSMutableArray, NSString;

@interface TVViewPointDataSubModel : ViewTypeBaseModel
{
    NSString *_tag_title;
    NSMutableArray *_tag_videos;
}

@property(retain, nonatomic) NSMutableArray *tag_videos; // @synthesize tag_videos=_tag_videos;
@property(retain, nonatomic) NSString *tag_title; // @synthesize tag_title=_tag_title;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end


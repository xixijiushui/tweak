//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DetailStagePhotoModel : NSObject
{
    NSString *_episodeId;
    NSString *_vid;
    NSString *_cover;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *episodeId; // @synthesize episodeId=_episodeId;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end


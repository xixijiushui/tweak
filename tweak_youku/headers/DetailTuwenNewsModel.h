//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailTuwenBaseModel.h"

@class NSAttributedString, NSString;

@interface DetailTuwenNewsModel : DetailTuwenBaseModel
{
    NSString *_publish_time;
    NSString *_source_name;
    NSString *_img;
    NSAttributedString *_formatSubTitle;
}

@property(retain, nonatomic) NSAttributedString *formatSubTitle; // @synthesize formatSubTitle=_formatSubTitle;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *source_name; // @synthesize source_name=_source_name;
@property(copy, nonatomic) NSString *publish_time; // @synthesize publish_time=_publish_time;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class NSMutableArray;

@interface TVViewPointDataModel : ViewTypeBaseModel
{
    NSMutableArray *_tagArr;
    NSMutableArray *_tag_names;
}

@property(retain, nonatomic) NSMutableArray *tag_names; // @synthesize tag_names=_tag_names;
@property(retain, nonatomic) NSMutableArray *tagArr; // @synthesize tagArr=_tagArr;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end


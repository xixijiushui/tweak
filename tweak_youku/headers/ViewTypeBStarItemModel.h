//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class NSNumber, NSString;

@interface ViewTypeBStarItemModel : ViewTypeBaseModel
{
    NSString *_person_face;
    NSString *_person_name;
    NSString *_subtitle;
    NSNumber *_person_id;
}

@property(retain, nonatomic) NSNumber *person_id; // @synthesize person_id=_person_id;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *person_name; // @synthesize person_name=_person_name;
@property(copy, nonatomic) NSString *person_face; // @synthesize person_face=_person_face;
- (void).cxx_destruct;
- (id)jModel;
- (void)parseStatisticsParam;
- (id)initWithDic:(id)arg1;

@end

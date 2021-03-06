//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, jump_infoModel, membership_corner_markModel;

@interface VIPMyReservationModel : NSObject
{
    _Bool _isSelect;
    _Bool _isShow;
    NSString *_error;
    NSString *_msg;
    jump_infoModel *_jump_info;
    NSString *_title;
    long long _paid;
    NSString *_second_title;
    NSString *_img;
    NSString *_total_vv;
    NSString *_release_time;
    membership_corner_markModel *_membership_corner;
    NSMutableArray *_dataArray;
    membership_corner_markModel *_membership_corner_mark;
}

+ (id)arrayParsingMyReservation:(id)arg1;
@property(retain, nonatomic) membership_corner_markModel *membership_corner_mark; // @synthesize membership_corner_mark=_membership_corner_mark;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(readonly, nonatomic) membership_corner_markModel *membership_corner; // @synthesize membership_corner=_membership_corner;
@property(copy, nonatomic) NSString *release_time; // @synthesize release_time=_release_time;
@property(copy, nonatomic) NSString *total_vv; // @synthesize total_vv=_total_vv;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *second_title; // @synthesize second_title=_second_title;
@property(nonatomic) long long paid; // @synthesize paid=_paid;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) jump_infoModel *jump_info; // @synthesize jump_info=_jump_info;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *error; // @synthesize error=_error;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
- (void).cxx_destruct;
- (id)initWithArray:(id)arg1 error:(id)arg2 msg:(id)arg3;
- (id)initWithJump_infoModel:(id)arg1 title:(id)arg2 paid:(long long)arg3 second_title:(id)arg4 img:(id)arg5 total_vv:(id)arg6 release_time:(id)arg7;

@end


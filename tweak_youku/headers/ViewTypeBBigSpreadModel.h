//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class NSString;

@interface ViewTypeBBigSpreadModel : ViewTypeBaseModel
{
    NSString *_jumpURL;
    NSString *_cmd;
    NSString *_title;
    NSString *_thumburl;
}

@property(retain, nonatomic) NSString *thumburl; // @synthesize thumburl=_thumburl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *cmd; // @synthesize cmd=_cmd;
@property(retain, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
- (void).cxx_destruct;
- (void)parseStatisticsParam;
- (id)initWithDic:(id)arg1;

@end


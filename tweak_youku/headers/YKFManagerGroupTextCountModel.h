//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

@class NSDictionary, NSString;

@interface YKFManagerGroupTextCountModel : ALMBaseViewModel
{
    NSString *_text;
    long long _count;
    NSString *_urlScheme;
    NSDictionary *_paramDic;
    double _viewHeight;
}

+ (Class)cardCellClass;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(retain, nonatomic) NSDictionary *paramDic; // @synthesize paramDic=_paramDic;
@property(retain, nonatomic) NSString *urlScheme; // @synthesize urlScheme=_urlScheme;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)onTouched;

@end


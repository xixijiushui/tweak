//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YYTextLinePositionModifier.h"

@class NSString, UIFont;

@interface YKShortVideoCommentTextLinePositionModifier : NSObject <YYTextLinePositionModifier>
{
    UIFont *_font;
    double _paddingTop;
    double _paddingBottom;
    double _lineHeightMultiple;
}

@property(nonatomic) double lineHeightMultiple; // @synthesize lineHeightMultiple=_lineHeightMultiple;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) double paddingTop; // @synthesize paddingTop=_paddingTop;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (double)heightForLineCount:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)modifyLines:(id)arg1 fromText:(id)arg2 inContainer:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


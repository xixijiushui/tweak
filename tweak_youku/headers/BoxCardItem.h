//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface BoxCardItem : NSObject <NSCopying>
{
    _Bool _showCardTopPadding;
    _Bool _showSubTitle;
    NSMutableArray *_videosArray;
    long long _style;
    double _aspectRatio;
    unsigned long long _column;
    unsigned long long _maxTitleLine;
    double _viewWidth;
    double _columnSpacing;
    struct CGSize _viewSizeCache;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) struct CGSize viewSizeCache; // @synthesize viewSizeCache=_viewSizeCache;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double columnSpacing; // @synthesize columnSpacing=_columnSpacing;
@property(nonatomic) _Bool showSubTitle; // @synthesize showSubTitle=_showSubTitle;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(nonatomic) _Bool showCardTopPadding; // @synthesize showCardTopPadding=_showCardTopPadding;
@property(nonatomic) unsigned long long maxTitleLine; // @synthesize maxTitleLine=_maxTitleLine;
@property(nonatomic) unsigned long long column; // @synthesize column=_column;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSMutableArray *videosArray; // @synthesize videosArray=_videosArray;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

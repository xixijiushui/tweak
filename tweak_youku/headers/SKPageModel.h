//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SearchVideoModel, ViewTypeBaseModel;

@interface SKPageModel : NSObject
{
    _Bool _showSuggestView;
    _Bool _isPlayed;
    float _yoffset;
    SearchVideoModel *_videosModel;
    long long _pageNumber;
    long long _menuIndex;
    ViewTypeBaseModel *_selectAlsoSearchModel;
    SearchVideoModel *_alsoSearchModel;
    double _totalheight;
}

@property(nonatomic) double totalheight; // @synthesize totalheight=_totalheight;
@property(retain, nonatomic) SearchVideoModel *alsoSearchModel; // @synthesize alsoSearchModel=_alsoSearchModel;
@property(retain, nonatomic) ViewTypeBaseModel *selectAlsoSearchModel; // @synthesize selectAlsoSearchModel=_selectAlsoSearchModel;
@property(nonatomic) _Bool isPlayed; // @synthesize isPlayed=_isPlayed;
@property(nonatomic) long long menuIndex; // @synthesize menuIndex=_menuIndex;
@property(nonatomic) float yoffset; // @synthesize yoffset=_yoffset;
@property(nonatomic) _Bool showSuggestView; // @synthesize showSuggestView=_showSuggestView;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) SearchVideoModel *videosModel; // @synthesize videosModel=_videosModel;
- (void).cxx_destruct;
- (void)calcScreenNumberOfModel:(id)arg1;
- (void)setHeightOfModels:(id)arg1;
- (void)calculateScreenNumber:(id)arg1;
- (void)appendingFromVideoModel:(id)arg1;
- (void)resetData;
- (id)init;

@end


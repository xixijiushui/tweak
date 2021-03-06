//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HomePageItem, UIColor;

@interface HomeNewTopViewStateContext : NSObject
{
    double _progress;
    UIColor *_originBgColor;
    UIColor *_bgColor;
    UIColor *_searchTextColor;
    UIColor *_searchIconColor;
    UIColor *_searchBgColor;
    UIColor *_menuColor;
    HomePageItem *_pageItem;
}

@property(retain, nonatomic) HomePageItem *pageItem; // @synthesize pageItem=_pageItem;
@property(retain, nonatomic) UIColor *menuColor; // @synthesize menuColor=_menuColor;
@property(retain, nonatomic) UIColor *searchBgColor; // @synthesize searchBgColor=_searchBgColor;
@property(retain, nonatomic) UIColor *searchIconColor; // @synthesize searchIconColor=_searchIconColor;
@property(retain, nonatomic) UIColor *searchTextColor; // @synthesize searchTextColor=_searchTextColor;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIColor *originBgColor; // @synthesize originBgColor=_originBgColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;

@end


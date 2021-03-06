//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UITextSSSearchField;

@interface SSTopSearchBarView : UIView
{
    double rateOfWidth;
    double end;
    UITextSSSearchField *_searchField;
    UIButton *_backButton;
    long long _lineLeftMargin;
    id <YoukuSearchBarViewDelegate> _searchBarViewDelegate;
}

@property(nonatomic) __weak id <YoukuSearchBarViewDelegate> searchBarViewDelegate; // @synthesize searchBarViewDelegate=_searchBarViewDelegate;
@property(nonatomic) long long lineLeftMargin; // @synthesize lineLeftMargin=_lineLeftMargin;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UITextSSSearchField *searchField; // @synthesize searchField=_searchField;
- (void).cxx_destruct;
- (void)qrBtnClicked:(id)arg1;
- (void)backButtonDidClicked:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


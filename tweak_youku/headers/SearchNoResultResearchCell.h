//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKTableViewCell.h"

@class UIImageView, UILabel;

@interface SearchNoResultResearchCell : SKTableViewCell
{
    id <SearchNoResultResearchCellDelegate> _noresultDelegate;
    UIImageView *_icon;
    UILabel *_researchLabel;
    UIImageView *_button;
    UILabel *_codeLabel;
}

@property(retain, nonatomic) UILabel *codeLabel; // @synthesize codeLabel=_codeLabel;
@property(retain, nonatomic) UIImageView *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *researchLabel; // @synthesize researchLabel=_researchLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak id <SearchNoResultResearchCellDelegate> noresultDelegate; // @synthesize noresultDelegate=_noresultDelegate;
- (void).cxx_destruct;
- (void)research;
- (void)refresh;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ChannelTrailerMovieScrollView;

@interface ChannelTrailerMovieListCell : UITableViewCell
{
    id _cellDelegate;
    ChannelTrailerMovieScrollView *_movieScrollView;
}

@property(retain, nonatomic) ChannelTrailerMovieScrollView *movieScrollView; // @synthesize movieScrollView=_movieScrollView;
@property(nonatomic) __weak id cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)reloadData;
- (void)setList:(id)arg1 size:(struct CGSize)arg2 index:(long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

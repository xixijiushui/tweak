//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LOTValueInterpolator.h"

@interface LOTColorInterpolator : LOTValueInterpolator
{
    id <LOTColorValueDelegate> _delegate;
}

@property(nonatomic) __weak id <LOTColorValueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)hasDelegateOverride;
- (void)setValueDelegate:(id)arg1;
- (struct CGColor *)colorForFrame:(id)arg1;

@end


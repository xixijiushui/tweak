//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (LFUI)
+ (id)lf_hexStringWithInteger:(long long)arg1;
+ (id)hexLetterStringWithInteger:(long long)arg1;
- (struct CGSize)lf_sizeForFont:(id)arg1 size:(struct CGSize)arg2 mode:(long long)arg3;
- (double)lf_heightForFont:(id)arg1 width:(double)arg2 line:(long long)arg3;
- (double)heightForString:(id)arg1 font:(id)arg2 width:(double)arg3;
- (double)lf_heightForFont:(id)arg1 width:(double)arg2;
- (double)lf_widthForFont:(id)arg1;
- (id)lf_localizedStringFromNumber;
- (id)lf_stringByRemoveLastCharacter;
- (id)lf_stringByRemoveCharacterAtIndex:(unsigned long long)arg1;
- (struct _NSRange)downRoundRangeOfComposedCharacterSequencesForRange:(struct _NSRange)arg1;
- (id)lf_substringAvoidBreakingUpCharacterSequencesWithRange:(struct _NSRange)arg1;
- (id)lf_substringAvoidBreakingUpCharacterSequencesWithRange:(struct _NSRange)arg1 lessValue:(_Bool)arg2 countingNonASCIICharacterAsTwo:(_Bool)arg3;
- (id)lf_substringAvoidBreakingUpCharacterSequencesToIndex:(unsigned long long)arg1;
- (id)lf_substringAvoidBreakingUpCharacterSequencesToIndex:(unsigned long long)arg1 lessValue:(_Bool)arg2 countingNonASCIICharacterAsTwo:(_Bool)arg3;
- (id)lf_substringAvoidBreakingUpCharacterSequencesFromIndex:(unsigned long long)arg1;
- (id)lf_substringAvoidBreakingUpCharacterSequencesFromIndex:(unsigned long long)arg1 lessValue:(_Bool)arg2 countingNonASCIICharacterAsTwo:(_Bool)arg3;
- (struct _NSRange)transformRangeToDefaultModeWithRange:(struct _NSRange)arg1;
- (unsigned long long)transformIndexToDefaultModeWithIndex:(unsigned long long)arg1;
- (unsigned long long)lf_lengthWhenCountingNonASCIICharacterAsTwo;
- (id)lf_removeMagicalChar;
- (id)lf_trimLineBreakCharacter;
- (id)lf_trimAllWhiteSpace;
- (id)lf_trim;
- (_Bool)lf_includesString:(id)arg1;
@end


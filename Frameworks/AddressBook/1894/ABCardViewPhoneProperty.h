//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABCardViewProperty.h>

@class ABRTTServices;

@interface ABCardViewPhoneProperty : ABCardViewProperty
{
    ABRTTServices *_ttyServices;
}

- (void).cxx_destruct;
- (id)emptyValueForMultiValue:(id)arg1 label:(id)arg2;
- (BOOL)isValueEmpty:(id)arg1;
- (id)actionForGlyphName:(id)arg1;
- (id)actionGlyphNames;
- (id)initWithValueKey:(id)arg1 TTYServices:(id)arg2;

@end


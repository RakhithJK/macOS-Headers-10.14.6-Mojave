//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@interface TSizeToFitFormatter : NSFormatter
{
    struct TNSRef<NSDictionary, void> _attributes;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (_Bool)fits:(const struct TString *)arg1;
- (double)measure:(const struct TString *)arg1;
- (void)updatedSize:(struct CGSize)arg1 attributes:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchManagedBooksResultObject : CATTaskResultObject
{
    NSArray *_books;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *books; // @synthesize books=_books;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBooks:(id)arg1;

@end


/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreOfferContentRating : NSObject <NSCoding> {
    NSDictionary *_dictionary;
    NSString *_ratingDescription;
    NSString *_ratingLabel;
    int _ratingLevel;
    unsigned int _ratingSystem;
}

@property (getter=isExplicitContent, nonatomic, readonly) BOOL explicitContent;
@property (nonatomic, readonly) id mediaPropertyContentRatingValue;
@property (nonatomic, copy) NSString *ratingDescription;
@property (nonatomic, copy) NSString *ratingLabel;
@property (nonatomic) int ratingLevel;
@property (nonatomic) unsigned int ratingSystem;
@property (getter=isRestrictedContent, nonatomic, readonly) BOOL restrictedContent;
@property (getter=isRestrictedPurchase, nonatomic, readonly) BOOL restrictedPurchase;

+ (unsigned int)ratingSystemFromString:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)_isRatingSystemForApps:(unsigned int)arg1;
- (BOOL)_isRatingSystemForMovies:(unsigned int)arg1;
- (BOOL)_isRatingSystemForMusic:(unsigned int)arg1;
- (BOOL)_isRatingSystemForTV:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isExplicitContent;
- (BOOL)isRestrictedContent;
- (BOOL)isRestrictedPurchase;
- (id)mediaPropertyContentRatingValue;
- (id)ratingDescription;
- (id)ratingLabel;
- (int)ratingLevel;
- (unsigned int)ratingSystem;
- (void)setRatingDescription:(id)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setRatingLevel:(int)arg1;
- (void)setRatingSystem:(unsigned int)arg1;
- (id)valueForProperty:(id)arg1;

@end

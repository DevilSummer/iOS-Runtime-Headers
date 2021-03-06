/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLCenterSpan : PBCodable <NSCopying> {
    struct { 
        unsigned int latitude : 1; 
        unsigned int latitudeDelta : 1; 
        unsigned int longitude : 1; 
        unsigned int longitudeDelta : 1; 
    } _has;
    double _latitude;
    double _latitudeDelta;
    double _longitude;
    double _longitudeDelta;
}

@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLatitudeDelta;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasLongitudeDelta;
@property (nonatomic) double latitude;
@property (nonatomic) double latitudeDelta;
@property (nonatomic) double longitude;
@property (nonatomic) double longitudeDelta;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLatitude;
- (BOOL)hasLatitudeDelta;
- (BOOL)hasLongitude;
- (BOOL)hasLongitudeDelta;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (double)latitude;
- (double)latitudeDelta;
- (double)longitude;
- (double)longitudeDelta;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasLatitude:(BOOL)arg1;
- (void)setHasLatitudeDelta:(BOOL)arg1;
- (void)setHasLongitude:(BOOL)arg1;
- (void)setHasLongitudeDelta:(BOOL)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLatitudeDelta:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setLongitudeDelta:(double)arg1;
- (void)writeTo:(id)arg1;

@end
